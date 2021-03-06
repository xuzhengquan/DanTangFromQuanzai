//
//  XZQRefreshView.swift
//  DanTangFromQuanzai
//
//  Created by 徐正权 on 16/8/13.
//  Copyright © 2016年 XZQ. All rights reserved.
//

import UIKit

class XZQRefreshView: UIView {

    @IBOutlet weak var loadingView: UIImageView!
 
    @IBOutlet weak var tipView: UIView!
    
    @IBOutlet weak var arrowIcon: UIImageView!
    
    // 旋转箭头
    func rotationArrowIcon(flag: Bool) {
        var angle = M_PI
        angle += flag ? -0.01 : 0.01
        UIView.animateWithDuration(kAnimationDuration) { 
            self.arrowIcon.transform = CGAffineTransformRotate(self.arrowIcon.transform,  CGFloat(angle))
        }
    }
    
    // 开始转圈动画
    func startLoadingViewAnimation() {
        tipView.hidden = true
        
        // 创建动画
        let animation = CABasicAnimation(keyPath: "transform.rotation")
        animation.toValue = 2 * M_PI
        animation.duration = 1
        animation.repeatCount = MAXFLOAT
        animation.removedOnCompletion = false
        loadingView.layer.addAnimation(animation, forKey: nil)
    }
    
    // 停止转圈动画
    func stopLoadingViewAnimation() {
        tipView.hidden = false
        loadingView.layer.removeAllAnimations()
    }
    
    // 类方法
    class func refreshView() -> XZQRefreshView {
        let temp = NSBundle.mainBundle().loadNibNamed(String(self), owner: nil, options: nil).last as! XZQRefreshView
        return temp
    }
}
