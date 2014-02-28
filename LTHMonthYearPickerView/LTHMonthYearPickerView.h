//
//  LTHMonthYearPickerView.m
//  LTHMonthYearPickerView Demo
//
//  Created by Roland Leth on 30/11/13.
//  Copyright (c) 2014 Roland Leth. All rights reserved.
//

@protocol LTHMonthYearPickerViewDelegate <NSObject>

@optional
- (void)pickerDidSelectRow:(NSInteger)row inComponent:(NSInteger)component;
- (void)pickerDidPressDoneWithSelection:(NSString *)first second:(NSString *)second;
- (void)pickerDidPressCancel;

@end

typedef enum {
  kMonth = 1,
  kShortMonth = 2,
  kNumberedMonths = 3,
  kQuarter = 4
} k_displayType;

@interface LTHMonthYearPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>

@property (nonatomic, strong) id<LTHMonthYearPickerViewDelegate> delegate;
@property (nonatomic, strong) UIPickerView *datePicker;
@property (nonatomic, strong) NSArray *months;
@property (nonatomic, strong) NSMutableArray *years;

/*
 @date: set to a date if you want the picker to be initialized with a specific month and year.
	it automatically fetches the month & year from @date.
 @displayType: define what options the picker should offer (months, numbered months, quarters)
 @showToolbar: set to YES if you want the picker to have a Cancel/Done toolbar.
 */
- (id)initWithDate:(NSDate *)date displayType:(k_displayType)displayType andToolbar:(BOOL)showToolbar;

@end
