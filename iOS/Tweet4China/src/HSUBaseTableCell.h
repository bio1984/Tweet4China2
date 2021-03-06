//
//  HSUBaseTableCell.h
//  Tweet4China
//
//  Created by Jason Hsu on 3/10/13.
//  Copyright (c) 2013 Jason Hsu <support@tuoxie.me>. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HSUTableCellData;
@interface HSUBaseTableCell : UITableViewCell

@property (nonatomic, strong) HSUTableCellData *data;

- (void)setupWithData:(HSUTableCellData *)data;
+ (CGFloat)heightForData:(HSUTableCellData *)data;
- (void)setupControl:(UIControl *)control forKey:(NSString *)key;
- (void)setupControl:(UIControl *)control forKey:(NSString *)key cleanOldEvents:(BOOL)clean;

@end
