MDReverb : MultiOutUGen {

	*ar { arg inL = 0.0, inR = 0.0, size = 0.8, decay = 0.8, absorb = 0.5, preDelay = 0.1, reverse = 0.0, rate = 0.001, depth = 0.0, shimmer = 0.0, tilt = 0.5, mix = 0.5;
		^this.multiNew('audio', inL.asAudioRateInput, inR.asAudioRateInput, size, decay, absorb, preDelay, reverse, rate, depth, shimmer, tilt, mix);
	}

	init { arg ... theInputs;
		inputs = theInputs;

		^this.initOutputs(2, rate);
	}

	checkInputs { ^this.checkNInputs(2) }

	argNamesInputsOffset { ^1 }

}
