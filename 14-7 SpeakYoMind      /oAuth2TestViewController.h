/*
 * Copyright (c) 2010, Dominic DiMarco (dominic@ReallyLongAddress.com)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * -Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 
 * -Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 
 * -Neither the name of the author nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
 */

//
//  oAuth2TestViewController.h
//  oAuth2Test
//
//  Created by dominic dimarco (ddimarco@room214.com @dominicdimarco) on 5/22/10.
//

#import <UIKit/UIKit.h>
#import "FbGraph.h"
#import "SpeakYoMindAppDelegate.h"
#import "AppConstat.h"

@protocol callFacebookremove <NSObject>

-(void)removeview:(int)Value;

@end
@interface oAuth2TestViewController : UIViewController <UIWebViewDelegate> {

	FbGraph *fbGraph;

	//we'll use this to store a feed post (when you press 'post me/feed').
	//when you press delete me/feed this is the post that's deleted
	NSString *feedPostId;
    id<callFacebookremove> delegate;
    int valueFB;
    int userid;
	
}

@property (nonatomic,retain) id<callFacebookremove> delegate;
@property (nonatomic, retain) FbGraph *fbGraph;
@property (nonatomic, retain) NSString *feedPostId;
-(IBAction)clickBack;
-(IBAction)removeFacebook;

//-(IBAction)getMeButtonPressed:(id)sender;
//-(IBAction)getMeFriendsButtonPressed:(id)sender;
//-(IBAction)getMeFeedButtonPressed:(id)sender;
//-(IBAction)postMeFeedButtonPressed:(id)sender;
//-(IBAction)postPictureButtonPressed:(id)sender;
//-(IBAction)getMeMetadataButtonPressed:(id)sender;
//-(IBAction)deleteMeFeedButtonPressed:(id)sender;
//-(IBAction)searchButtonPressed:(id)sender;
//-(IBAction)getAuthorPictureButtonPressed:(id)sender;

@end

