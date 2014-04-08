//
//  PreviewViewController.h
//  BitPix
//
//  Created by Matt Holmboe Kurt McIntire on 4/4/14.
//  Copyright (c) 2014 Vektor Digital. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FRDLivelyButton.h"
#import <Canvas/CSAnimation.h>
#import <Canvas/CSAnimationView.h>

@interface PreviewViewController : UIViewController

@property (nonatomic, strong) UIImage *image;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet FRDLivelyButton *cancelButton;

- (IBAction)cancel:(id)sender;


@end
