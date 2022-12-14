
#define DATAPIN 13
#define MAXLEDNO 480



enum Leed{
	
	/*
	 ************ NAMING RULES *************
	 * A-Z = groups (1st position)
	 * 1++ = subgroup of A-Z (1st position)
	 * S = start (2nd position)
	 * E = end (2nd position)
	
	 
	 
	 ************ RIGHT SIDE *************
	 * A = R. outside nose wheels
	 * 	~ 1: front 			(solid)			x14
	 * 	~ 2: horiz top			(gradient)		x19
	 *	~ 3: back			(solid)			x10
	 *	~ 4: wheel + bottom		(gradient * -1)		~x26
	 *
	 * B = R. inside nose wheels
	 * 	~ 1: front 			(solid)			x14
	 * 	~ 2: horiz top			(gradient)		x19
	 *	~ 3: back			(solid)			x10
	 *
	 * C = R. door frame
	 *	~ 1: front + top  		(gradient)		~x59
	 *	~ 2: back			(solid)			x35
	 * 	~ 3: bot			(gradient * -1)		x43
	 *
	 * D = R. Nose
	 *	~ 1: front			(solid)			x14
	 * 	~ 2: horizontal			(gradient)		x14

	 
	 
	 ************ LEFT SIDE *************
	 * E = L. Nose
	 * 	~ 1: front 			(solid)			x14
	 * 	~ 2: horiz top			(gradient)		x19
	 *	~ 3: back			(solid)			x10
	 *	~ 4: wheel + bottom		(gradient)		~x26
	 *
	 * F = L. inside nose wheels
	 * 	~ 1: front 			(solid)			x14
	 * 	~ 2: horiz top			(gradient)		x19
	 *	~ 3: back			(solid)			x10
	 *
	 * G = L. door frame
	 *	~ 1: front + top  		(gradient)		~x59
	 *	~ 2: back			(solid)			x35
	 * 	~ 3: bot			(gradient * -1)		x43
	 *
	 * H = L. outside nose wheels
	 *	~ 1: front			(solid)			x14
	 * 	~ 2: horizontal			(gradient)		x14
	 
	*/
	
	A1_S = 0, 		// 1st 
	A1_E = 13, 		// 14th
	
	A2_S = 14, 		// 15th
	A2_E = A2_S + 19, 	// =32 or 33th (14+19)
	
	A3_S = 33, 		// 34th 
	A3_E = A3_S + 10, 	// =43 or 44th (33+10)
	
	// ituloy nyo nalang ilatag itong mga range ng mga leds na cocontrollin
};



void setup()
{
	// usual fastled initalization

}



void loop()
{
	
	
	
	
	

	if(digitalREead(DATAPIN) == 1) {
		
	}
	
	
	
	
	// else, default
	// i.e., have all led 
	// shine Red with a brughtness of 5
	// wala lang to, example lang
	else {
		for(int i=0; i<MAXLEDNO; i++){
			leds[i].setRGB(5,0,0);
			FastLED.show();
		}
	}
	
	
	//for()
	
	
	
}
