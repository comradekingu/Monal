//
//  MLChatCell.h
//  Monal
//
//  Created by Anurodh Pokharel on 8/20/13.
//
//

#import <UIKit/UIKit.h>

@interface MLChatCell : UITableViewCell
{
    UIImageView* _bubbleImage;
}

@property (nonatomic, strong) NSString* time;
@property (nonatomic, assign) BOOL outBound;


@property (nonatomic, assign) BOOL showName;
@property (nonatomic, strong) UILabel* name;
@property (nonatomic, strong) UILabel* date;

+(CGFloat) heightForText:(NSString*) text inWidth:(CGFloat) width;
@end
