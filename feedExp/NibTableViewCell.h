//
//  NibTableViewCell.h
//  MyTableViewSuite
//
//  Created by Romy on 6/26/15.
//  Copyright © 2015 Romy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NibTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIImageView *nibImageView;
@property (weak, nonatomic) IBOutlet UILabel *detailsLabel;

// since this is a class method you can use this
// trying to access the cell from the heightatindexpath method will cause an infinite loop
+ (CGFloat)nibCellHeight;

@end
