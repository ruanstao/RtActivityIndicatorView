//
//  ViewController.m
//  RtActivityIndicatorView
//
//  Created by RuanSTao on 16/1/28.
//  Copyright © 2016年 JJS-iMac. All rights reserved.
//

#import "ViewController.h"
#import <MJRefresh.h>
#import "RtRefreshHeader.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITableView *tableVIew;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    __weak typeof(self) weakSelf = self;
    self.tableVIew.mj_header = [RtRefreshHeader headerWithRefreshingBlock:^{
        __strong typeof(weakSelf) strongSelf = weakSelf;
        [strongSelf.tableVIew.mj_header performSelector:@selector(endRefreshing) withObject:nil afterDelay:10];
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
