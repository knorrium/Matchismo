//
//  Deck.h
//  Matchismo
//
//  Created by Felipe Knorr Kuhn on 2/2/13.
//  Copyright (c) 2013 Felipe Knorr Kuhn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;

- (Card *)drawRandomCard;

@end
