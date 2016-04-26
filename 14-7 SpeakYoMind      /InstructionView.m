//
//  InstructionView.m
//  SpeakYoMind
//
//  Created by apple apple on 7/4/12.
//  Copyright (c) 2012 koenxcell. All rights reserved.
//

#import "InstructionView.h"

@implementation InstructionView

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}
-(IBAction)Back:(id)sender
{
    [self.navigationController popViewControllerAnimated:YES];
}
#pragma mark - View lifecycle

-(void)viewWillAppear:(BOOL)animated
{
    TXTView1.layer.borderWidth = 2.0f;
    TXTView1.layer.borderColor = [[UIColor blackColor] CGColor];
    TXTView1.layer.cornerRadius = 8; 
}
- (void)viewDidLoad
{
   
    [super viewDidLoad];
    
    // Do any additional setup after loading the view from its nib.
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
