//
//  MLLogInViewController.h
//  Monal
//
//  Created by Anurodh Pokharel on 11/9/18.
//  Copyright © 2018 Monal.im. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MLLogInViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UITextField *jid;
@property (nonatomic, weak) IBOutlet UITextField *password;
@property (nonatomic, weak) IBOutlet UIButton *loginButton;
@property (nonatomic, weak) IBOutlet UIScrollView *scrollView;
@property (nonatomic, weak) IBOutlet UIView *contentView;
@property (nonatomic, weak) IBOutlet UIImageView *topImage;

-(IBAction) login:(id)sender;
-(IBAction) registerAccount:(id)sender;
-(IBAction) useWithoutAccount:(id)sender;


-(IBAction) tapAction:(id)sender;


@end

NS_ASSUME_NONNULL_END
