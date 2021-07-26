int getVolumePerBreath ()
{
  int newFlowRate = getFilteredFlowRate();                    // in ml/s
  static byte integratePeriod = 10;                           // in miliseconds
  static unsigned long integratePeriodCounter = millis();     // to keep track of the current integration time
  static unsigned long breathVolumeOutput = 0;                // final volume to 'return' from function
  static unsigned long breathVolume = 0;                      // volume accumulator

  // add to integrated flow rate accumulator every Xms
  if (breathStatus == inhale)        // if during inhale
  {
    // add to integrated flow rate accumulator with volume recorded over the integratePeriod
    if (millis() - integratePeriodCounter >= integratePeriod)
    {
      breathVolume = breathVolume + (newFlowRate * (millis() - integratePeriodCounter)); // convert to volume in ml/ms over integratePeriod
      //Serial.println(millis() - integratePeriodCounter);      // code run time
      breathVolumemls = breathVolume / 1000;                    // store volume rise (useful in VCV mode)
      integratePeriodCounter = millis();
    }
  }
  else                                    // if exhale
  {
    breathVolumemls = 0;                  // reset volume rise variable
    if (breathVolume > 0)                 // if volume hasn't been recorded already for last breath
    {
      breathVolumeOutput = round(breathVolume * 0.001);   // set output volume
      breathVolume = 0;                   // reset accumulator
    }
    integratePeriodCounter = millis();    // reset
  }

  return breathVolumeOutput;
}
