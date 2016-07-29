//
//  MSStringScaner.h
//  MathStringProgram
//
//  Created by NOVO on 16/7/18.
//  Copyright © 2016年 NOVO. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MSElement.h"

@interface MSScaner : NSObject

+ (void)scanString:(NSString*)string
             error:(NSError*__strong*)error
             block:(void(^)(MSElement* value,NSUInteger idx,BOOL isEnd,BOOL* stop))block;

@end
