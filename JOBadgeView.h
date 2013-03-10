//
//  JOBadgeView.h
//  JOKit
//
//  Created by Jeffrey Oloresisimo on 11-07-27.
//  Copyright (c) 2011 Jeffrey Oloresisimo. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
//  of the Software, and to permit persons to whom the Software is furnished to do
//  so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.


@interface JOBadgeView : UILabel {
    UIColor*        _fillColor;
    UIColor*        _borderColor;
    
    BOOL            _showBorder;
    BOOL            _showGloss;
    BOOL            _showShadow;
    BOOL            _autoPositioning;
}

@property (nonatomic, copy) UIColor* fillColor;
@property (nonatomic, copy) UIColor* borderColor;

@property (nonatomic, assign) BOOL showBorder;
@property (nonatomic, assign) BOOL showGloss;
@property (nonatomic, assign) BOOL showShadow;
@property (nonatomic, assign) BOOL autoPositioning;

@end
