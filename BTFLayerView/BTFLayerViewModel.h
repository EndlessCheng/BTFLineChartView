//
// Created by chengyh on 15/8/7.
// Copyright (c) 2015 jianyan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BTFLayerViewModel : NSObject

@property NSMutableArray *points;
@property int runSeconds;

@property CGPoint minPoint; // ([0.0 ~ 1.0, y])
@property CGPoint maxPoint; // ([0.0 ~ 1.0, y])

- (id)initWithArray:(NSArray *)yArray
         runSeconds:(int)runSeconds;

@end