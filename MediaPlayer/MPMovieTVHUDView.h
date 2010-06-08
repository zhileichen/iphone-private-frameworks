/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>
#import "MediaPlayer-Structs.h"

@class UIImageView;

@interface MPMovieTVHUDView : UIView {
	int _currentState;
	UIImageView* _playbackMode;
}
-(id)initWithFrame:(CGRect)frame;
-(void)_changeState;
-(void)_fadeOut;
-(void)animationDidStop:(id)animation;
-(void)setPlaybackState:(int)state;
@end
