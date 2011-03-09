//
//  OscillatorController.h
//  Synth
//
//  Created by Tyler Casselman on 3/5/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Oscillator.h"
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

#define SAMPLE_RATE 44100.f

@interface OscillatorController : NSObject<AVAudioSessionDelegate> {
	NSMutableDictionary * oscillators_;
	AudioStreamBasicDescription format_;
	AudioQueueRef queue_;
	AudioQueueBufferRef buffers_ [3];

}
- (void)setup;
- (void)addOscillator:(Oscillator * )osc withId:(int)id;
- (void)stop;
- (void)play;

@end