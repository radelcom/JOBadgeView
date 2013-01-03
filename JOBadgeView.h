//
//  JOBadgeView.h
//  JOKit
//
//  Created by Jeffrey Oloresisimo on 11-07-27.
//  Copyright 2011 radelcom. All rights reserved.
//


@interface JOBadgeView : UILabel {
    NSString*       _badgeValue;
    
    UIColor*        _fillColor;
    UIColor*        _borderColor;
    
    BOOL            _showBorder;
    BOOL            _showGloss;
    BOOL            _showShadow;
    BOOL            _autoPositioning;
}

@property (nonatomic, copy) NSString* badgeValue;

@property (nonatomic, copy) UIColor* fillColor;
@property (nonatomic, copy) UIColor* borderColor;

@property (nonatomic, assign) BOOL showBorder;
@property (nonatomic, assign) BOOL showGloss;
@property (nonatomic, assign) BOOL showShadow;
@property (nonatomic, assign) BOOL autoPositioning;

@end
