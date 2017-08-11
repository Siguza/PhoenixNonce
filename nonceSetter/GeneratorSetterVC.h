//
//  GeneratorSetterVC.h
//  nonceSetter
//
//  Created by tihmstar on 11.08.17.
//  Copyright © 2017 tihmstar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GeneratorSetterVC : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *textfield;
@property (weak, nonatomic) IBOutlet UILabel *curGenLabel;
@property (weak, nonatomic) IBOutlet UILabel *errorLabel;
- (IBAction)btnPastePressed:(id)sender;
- (IBAction)btnSetPressed:(id)sender;
- (IBAction)kbDoneBtnPressed:(id)sender;


@end
