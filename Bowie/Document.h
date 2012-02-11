//
//  Document.h
//  Bowie
//
//  Created by Ken Cochrane on 2/11/12.
//  Copyright (c) 2012 Zanbow Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Document : NSDocument
{
    IBOutlet NSTextView *textView;
    NSAttributedString *mString;
}

- (NSAttributedString *) string;
- (void) setString: (NSAttributedString *) value;

@end
