//
//  Card.h
//  Matchismo
//
//  Created by Felipe Knorr Kuhn on 2/2/13.
//  Copyright (c) 2013 Felipe Knorr Kuhn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isFaceUp) BOOL faceUp;
@property (nonatomic, getter=isUnplayable) BOOL unplayable;

- (int)match:(NSArray *)cards;

@end
