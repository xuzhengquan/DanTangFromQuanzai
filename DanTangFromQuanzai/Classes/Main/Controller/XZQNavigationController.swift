//
//  YMNavigationController.swift
//  DanTangFromQuanzai
//
//  Created by 权仔 on 16/8/11.
//  Copyright © 2016年 XZQ. All rights reserved.
//

import UIKit
import SVProgressHUD

class XZQNavigationController: UINavigationController
{
    // 对导航控制器封装
    internal override class func initialize()
    {
        super.initialize()
        
        // 设置导航栏标题
        let navBar = UINavigationBar.appearance()
        navBar.barTintColor = XZQGlobalRedColor()
        navBar.tintColor = UIColor.whiteColor()
        navBar.titleTextAttributes = [NSForegroundColorAttributeName: UIColor.whiteColor(), NSFontAttributeName: UIFont.systemFontOfSize(20)]
    }
    
    /**
     统一所有控制器导航栏左上角的返回按钮，让所有push进来的控制器，它的导航栏左上角的内容都一样，能拦截所有的push操作
     
     - parameter viewController: 需要压栈的控制器
     - parameter animated:       是否动画
     */
    override func pushViewController(viewController: UIViewController, animated: Bool)
    {
        // 这是push进来的控制器viewcontroller，不是第一个自控制器（不是根控制器）
        if viewControllers.count > 0 {
            // push 后隐藏 tabbar
            viewController.hidesBottomBarWhenPushed = true
            viewController.navigationItem.leftBarButtonItem = UIBarButtonItem(image: UIImage(named: "checkUserType_backward_9x15_"), style: .Plain, target: self, action: #selector(navigationBackClick))
        }
        super.pushViewController(viewController, animated: true)
    }
    
    // 返回按钮
    func navigationBackClick()
    {
        if SVProgressHUD.isVisible()
        {
            SVProgressHUD.dismiss()
        }
        if UIApplication.sharedApplication().networkActivityIndicatorVisible
        {
            UIApplication.sharedApplication().networkActivityIndicatorVisible = false
        }
        popViewControllerAnimated(true)
    }
}
