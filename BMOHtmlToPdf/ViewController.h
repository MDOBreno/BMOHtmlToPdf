//
//  ViewController.h
//  BMOHtmlToPdf
//
//  Created by BRENOMEDEIROS on 18/02/22.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>


#define kPaperSizeA4 CGSizeMake(595.2,841.8)


@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet WKWebView *wkWebView;
- (IBAction)btConverter:(id)sender;


@property (strong, nonatomic) UIDocumentInteractionController *documentInteractionController;

@end

