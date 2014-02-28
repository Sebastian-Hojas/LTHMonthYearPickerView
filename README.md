# LTHMonthYearPickerView
Simple to use month/quarter & year picker view for those pesky Credit Card expiration dates & Co.

# How to use
Drag the contents of `LTHMonthYearPickerView` to your project, or add `pod 'LTHMonthYearPickerView'` to your podspec file.

```objc
/*
 @date: set to a date if you want the picker to be initialized with a specific month/quarter and year.
	it automatically fetches the month/quarter & year from @date.
 @displayType: define what options the picker should offer (months, numbered months, quarters)
 @showToolbar: set to YES if you want the picker to have a Cancel/Done toolbar.
 */
_monthYearPicker = [[LTHMonthYearPickerView alloc] initWithDate: [NSDate date]
													displayType:kQuarter
													 andToolbar: YES];
_monthYearPicker.delegate = self;
```

Comes with 3 delegate methods:
```objc
- (void)pickerDidSelectRow:(NSInteger)row inComponent:(NSInteger)component;
- (void)pickerDidPressDoneWithSelection:(NSString *)first second:(NSString *)second;
- (void)pickerDidPressCancel;
// Or corresponding notifications; if you prefer it like that, just uncomment the notification posts.
```

That's it.

Everything is easily customizable with macros and constants, from month/quarter & year fonts and colors (individually) to the month names, if you need them in another language.

![Screenshot](http://rolandleth.com/assets/monthyearpickerview/Screenshot.png)

# Apps using this control
If you're using this control, I'd love hearing from you! 

# License
Licensed under MIT. If you'd like (or need) a license without attribution, don't hesitate to [contact me](mailto:roland@rolandleth.com).