//
//  PlaceDetailedMainCell.h
//  CityGuide
//
//  Created by Dmitry Kuznetsov on 28/11/14.
//  Copyright (c) 2014 Appsgroup. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VALabel.h"

@interface PlaceDetailedMainCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *placeImage;
@property (weak, nonatomic) IBOutlet UIButton *btnHeart;
//@property (weak, nonatomic) IBOutlet VALabel *placeTitle;
//@property (weak, nonatomic) IBOutlet VALabel *placeSubTitle;

+ (NSString *)reuseId;
@end
