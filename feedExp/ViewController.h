//
//  ViewController.h
//  feedExp
//
//  Created by Romy on 7/12/15.
//  Copyright © 2015 Romy. All rights reserved.
//
#import "MWFeedParser.h"
#import <UIKit/UIKit.h>
#import "MWFeedParser.h"
#import <MWFeedParser/NSString+HTML.h>

@interface ViewController : UITableViewController <MWFeedParserDelegate>

@property (strong, nonatomic) MWFeedParser *feedParser;
@property (strong, nonatomic) NSMutableArray *parsedItems;
@property (strong, nonatomic) NSDateFormatter *formatter;

@property (strong, nonatomic) NSArray *itemsToDisplay;

@end

