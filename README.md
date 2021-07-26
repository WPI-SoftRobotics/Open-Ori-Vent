![](media/image1.png){width="2.7708453630796153in"
height="1.420300743657043in"}**Open-Source Project**

**Ori-Vent:** Design and Prototyping of Accessible and Portable
Origami-Inspired Ventilators

Soft Robotics Lab

Worcester Polytechnic Institute

Table of Contents

**Introduction**
\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--
2

**Part 1:** Materials
\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--
2

**Part 2:** Printed Parts List
\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--
3

**Part 3:** Building the Bellows
\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--
4

**Part 4:** Sealing Bellows
\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--
5

**Part 5:** Wiring Diagram
\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--
6

**Part 6:** Assembly
\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--
7

**Part 7:** Download Section
\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--7

**Part 8:** Video
\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--
7

**Introduction:**

The COVID-19 pandemic is responsible for hundreds of thousands of deaths
worldwide and remains a challenge that humanity must still overcome. As
hospitals continue to admit critical patients, they face medical
equipment shortages that may hinder life-saving treatments. We seek to
combat this equipment shortage by presenting a proof-of-concept portable
automated ventilator that is:

-   Low cost

-   Simple, Lightweight, Easy-to fabricate

As an open-source project, we will made public all the CAD files as well
as the software. We hope that you can also make your own ventilator
using these instructions! For the current designs, laser cutters and 3d
printers are necessary, though these parts could be cut/printed
elsewhere and then mailed to you for assemble.

**Part 1:** Materials & Orders

The initial prototype uses inexpensive materials and is easy to
manufacture. It is not necessary to buy or order same product as listed
below. You can do substitutions from your own supplies or purchase
similar items from somewhere else.

1 x Arduino \$10.69
[Order](https://www.amazon.com/kuman-Board-ATmega328P-Cable-Arduino/dp/B016D5KOOC/ref=sr_1_8?dchild=1&keywords=arduino+uno&qid=1611508916&s=electronics&sr=1-8)
(Amazon)

1 x Jumper Wires \$3.95
[Order](https://www.amazon.com/Adafruit-Premium-Female-Extension-Jumper/dp/B011OCHYH4/ref=sr_1_5?dchild=1&keywords=Premium+Female%2FMale+Extension+Jumper+Wires&qid=1611512005&sr=8-5)
(Amazon)

1 x Gear Motor \$5.75
[Order](https://www.robotshop.com/en/solarbotics-gm2-gear-motor-2-offset.html?gclid=Cj0KCQiA0rSABhDlARIsAJtjfCdsfFw8S3hpgmeDkNJJ-uj6FF2WkClDGlSEmdNQhc3PU3jhm355cdcaAkmYEALw_wcB)
(RobotShop)

1 x Motor Driver \$3.33
[Order](https://www.robotshop.com/en/pololu-dual-dc-motor-driver-1a-4-5v-3-5v-tb6612fng.html)
(RobotShop)

1 x Pressure Sensor (optional) \$16.33
[Order](https://www.digikey.com/en/products/detail/nxp-usa-inc/mpx5010dp/464054)
(Digi-Key)

For sealing origami bellows:

1 x \*Stretchlon200 Bagging Film \$3.90
[Order](https://www.fibreglast.com/product/stretchlon-200-bagging-film-1678/Vacuum_Bagging_Films_Peel_Ply_Tapes)
(FibreGlast)

1 x \*Nitrile Exam Gloves (Optional) -
[Order](https://www.amazon.com/MedPride-Powder-Free-Nitrile-Gloves-Medium/dp/B00GS8W3T4/ref=sr_1_8?crid=ZKSK0DJOM7HD&dchild=1&keywords=nitrile+exam+gloves&qid=1611515022&sprefix=nitrile+exam+%2Caps%2C203&sr=8-8)
(Amazon)

1 x \*E6000 Glue \$7.64
[Order](https://www.amazon.com/E6000-230010-Craft-Adhesive-Ounces/dp/B007TSYNG8/ref=sr_1_3?dchild=1&keywords=e6000&qid=1611515258&sr=8-3)
(Amazon)

Others:

1 x Screws - -

1 x \*PET film - -

1 x One way valve (2 Pieces) \$6.69
[Order](https://www.amazon.com/Check-Valve-Inline-Return-Liquid/dp/B07CC9K599/ref=sr_1_2?dchild=1&keywords=Silicon+Rubber+Check+Valve%2C+One+Way+4+pieces&qid=1611512795&sr=8-2)
(Amazon)

1 x Fishing wire \$2.99
[Order](https://www.amazon.com/Triple-Fish-Test-Leader-Fishing/dp/B01BZPPDJG/ref=sr_1_4?dchild=1&keywords=fishing+wire&qid=1611513070&refinements=p_36%3A-300&rnid=386589011&sr=8-4)
(Amazon)

> 1 x Rubber Tube \$8.59
> [Order](https://www.amazon.com/Nydotd-Natural-Slingshot-Catapult-Surgical/dp/B07DL6JJZ2/ref=sr_1_6?dchild=1&keywords=Natural+Latex+Rubber+Tubing&qid=1611513432&sr=8-6)
> (Amazon)

\* Optional Part: Order if you want to make origami bellows.

**Part 2: Printed Part List**

Files: Open Source Ori-Vent\\Printed Parts\\.STL & .SLDPRT

Here is a list of all the parts that need to be printed:

![](media/image2.png){width="5.877083333333333in"
height="3.7291666666666665in"}

Print Settings

> Profile Default: High resolution
>
> Supports: Yes
>
> Infill: 60%+
>
> Filament material: PLA

**Part 3: Building the Bellows**

Origami Bellows:

Files: Open Source Ori-Vent\\Origami_Laser Cut\\.DXF

Quantity: 3 x Origami Pattern

![](media/image3.png){width="1.7194444444444446in"
height="3.107638888888889in"}Material: PET (Polyethylene Terephthalate)
or any other low-cost and accessible plastic

Note: We provide two different length of origami patterns (18 inch and
9)

3D Printed Bellows

Files: Open Source Ori-Vent \\ 3D Printed Bellows \\ .SLDPRT:

![](media/image4.png){width="3.2402777777777776in"
height="1.2465277777777777in"}

Print Settings

> Profile Default: High resolution, insure at least two layers for
>
> Supports: No
>
> Filament material: NinjaFlex

**Part 4: Sealing Origami Bellows**

To seal the holes within the origami structure, we tested two different
materials and sealing processes. We recommend sealing with bagging film.

1)  Origami Bellows Sealing Process (recommended): You can glue (E6000
    flexible glue) the Stretchlon200 bagging film to the inner surface
    of the assembled origami module before folding completely.

![](media/image5.png){width="0.32034339457567806in"
height="0.39480533683289587in"}

![](media/image6.png){width="0.2951388888888889in"
height="0.7298611111111111in"}![](media/image7.png){width="1.211111111111111in"
height="1.6145833333333333in"}![](media/image8.png){width="0.9298611111111111in"
height="1.6583333333333334in"}![](media/image9.png){width="1.1472222222222221in"
height="1.8in"}![](media/image10.png){width="0.32916666666666666in"
height="0.40555555555555556in"}![](media/image11.png){width="0.32972331583552056in"
height="0.4063659230096238in"}

![](media/image6.png){width="0.2957688101487314in"
height="0.7300918635170603in"}

2)  Origami Bellows Sealing Process (Optional): You can glue multiple
    pieces of Nitrile exam glove onto the inner surface of the unfolded
    origami module using E6000 flexible glue. Lastly, assemble all 3
    origami pieces and glue attached sections.

![](media/image12.png){width="5.1168832020997375in"
height="3.024977034120735in"}

**Part 5: Wiring Diagram**

Minimal wiring diagram for connecting a microcontroller to a motor
driver. You can use breadboard (optional) or solder pins on the motor
driver.

Files: Open Source Ori-Vent\\Code&Data\\Arduino\\.ino

![](media/image13.png){width="6.259739720034996in"
height="4.227248468941382in"}

Micro Controller Motor Driver

GND \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\> GND

5V \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\> VCC

D3 \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\> AIN1

D5 \-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\-\--\> AIN2

**\
**

**Part 6: Assembly**

Assemble printed parts from Part 1 and sealed/3D printed bellows.

![](media/image14.png){width="5.859547244094488in"
height="4.168830927384077in"}

①-②Attach the motor and mount to the 3d printed part. ③Mount spool. ④-⑥
Origami/3D printed bellows. ⑦Back cover. ⑧ Wraps the cables around a
spool and attached to the other end. ⑨Holder. ⑩Nuts. ⑪Mount stand.
⑫-⑮Assemble air flow tube (optional).

**Part 7: Download Section**

Download .zip file (Include all Steps)

**Part 8: Video**

Files: Open Source Ori-Vent \\ Video \\ .mp4

YouTube Link:
