//
//  YYJOpenGLView.h
//  H264Decode
//
//  Created by yyj on 2017/5/31.
//  Copyright © 2017年 yyj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <OpenGLES/ES2//gl.h>
#import <OpenGLES/ES2/glext.h>

@interface YYJOpenGLView : UIView

- (void)setupGL;
- (void)displayPixelBuffer:(CVPixelBufferRef)pixelBuffer;

@end
