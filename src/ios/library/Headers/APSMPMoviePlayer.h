//
//  APSMPMoviePlayer.h
//  APSVAST
//
//  Created by Ovidiu on 10/02/15.
//  Copyright (c) 2015 Appscend. All rights reserved.
//

#import <MediaPlayer/MediaPlayer.h>
#import "APSMediaPlayerProtocol.h"
#import "KRAdapter.h"

@interface APSMPMoviePlayer : MPMoviePlayerController <APSMediaPlayerProtocol, KRAdapter>

@end
