//
//  WebTabView.h
//  bilibili
//
//  Created by TYPCN on 2015/9/3.
//  Copyright (c) 2015 TYPCN. All rights reserved.
//

#import "Browser.h"
#import "Common.hpp"

@interface WebTabView : CTTabContents{
    WebView *webView;
}
@property (strong) NSWindowController* playerWindowController;

-(id)initWithURL:(NSString *)url;
-(WebView *)GetWebView;

@end
