// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.1 clang-703.0.29)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC18DanTangFromQuanzai11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIView (SWIFT_EXTENSION(DanTangFromQuanzai))
- (void)clipRectCorner:(UIRectCorner)direction cornerRadius:(CGFloat)cornerRadius;

/// x
@property (nonatomic) CGFloat x;

/// y
@property (nonatomic) CGFloat y;

/// height
@property (nonatomic) CGFloat height;

/// width
@property (nonatomic) CGFloat width;

/// size
@property (nonatomic) CGSize size;

/// centerX
@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai4User")
@interface User : NSObject
@property (nonatomic, copy) NSString * _Nullable avatar_url;
@property (nonatomic, copy) NSString * _Nullable nickname;
- (nonnull instancetype)initWithDict:(NSDictionary<NSString *, id> * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC18DanTangFromQuanzai14ViewController")
@interface ViewController : UIViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai21XZQBaseViewController")
@interface XZQBaseViewController : UIViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai25XZQCategoryViewController")
@interface XZQCategoryViewController : XZQBaseViewController
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai10XZQChannel")
@interface XZQChannel : NSObject
@property (nonatomic, copy) NSString * _Nullable name;
- (nonnull instancetype)initWithDict:(NSDictionary<NSString *, id> * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai13XZQCollection")
@interface XZQCollection : NSObject
@property (nonatomic, copy) NSString * _Nullable banner_image_url;
@property (nonatomic, copy) NSString * _Nullable subtitle;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable cover_image_url;
- (nonnull instancetype)initWithDict:(NSDictionary<NSString *, id> * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai17XZQCollectionPost")
@interface XZQCollectionPost : NSObject
@property (nonatomic, copy) NSString * _Nullable cover_image_url;
@property (nonatomic, copy) NSString * _Nullable content_url;
@property (nonatomic, copy) NSString * _Nullable url;
@property (nonatomic, copy) NSString * _Nullable share_msg;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy) NSString * _Nullable short_title;
- (nonnull instancetype)initWithDict:(NSDictionary<NSString *, id> * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai10XZQComment")
@interface XZQComment : NSObject
@property (nonatomic, copy) NSString * _Nullable content;
@property (nonatomic, strong) User * _Nullable user;
- (nonnull instancetype)initWithDict:(NSDictionary<NSString *, id> * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end

@class UIButton;
@class UIScrollView;

SWIFT_CLASS("_TtC18DanTangFromQuanzai24XZQDanTangViewController")
@interface XZQDanTangViewController : XZQBaseViewController
@property (nonatomic, copy) NSArray<XZQChannel *> * _Nonnull channels;

/// 标签
@property (nonatomic, weak) UIView * _Nullable titlesView;

/// 底部红色指示器
@property (nonatomic, weak) UIView * _Nullable indicatorView;

/// 内容视图
@property (nonatomic, weak) UIScrollView * _Nullable contentView;

/// 当前选中的按钮
@property (nonatomic, weak) UIButton * _Nullable selectedButton;
- (void)viewDidLoad;
- (void)setupTitlesView;
- (void)arrowButtonClick:(UIButton * _Nonnull)button;
- (void)titlesClick:(UIButton * _Nonnull)button;
- (void)setupContentView;
- (void)setupNav;
- (void)dantangRightButtonClick;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface XZQDanTangViewController (SWIFT_EXTENSION(DanTangFromQuanzai)) <UIScrollViewDelegate>
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidEndDecelerating:(UIScrollView * _Nonnull)scrollView;
@end

@class XZQHomeItem;

SWIFT_CLASS("_TtC18DanTangFromQuanzai23XZQDetailViewController")
@interface XZQDetailViewController : XZQBaseViewController
@property (nonatomic, strong) XZQHomeItem * _Nullable homeItem;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIWebView;
@class NSURLRequest;

@interface XZQDetailViewController (SWIFT_EXTENSION(DanTangFromQuanzai)) <UIWebViewDelegate>
- (void)webViewDidStartLoad:(UIWebView * _Nonnull)webView;
- (void)webViewDidFinishLoad:(UIWebView * _Nonnull)webView;
- (BOOL)webView:(UIWebView * _Nonnull)webView shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)request navigationType:(UIWebViewNavigationType)navigationType;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai8XZQGroup")
@interface XZQGroup : NSObject
@property (nonatomic, copy) NSString * _Nullable icon_url;
@property (nonatomic, copy) NSString * _Nullable name;
- (nonnull instancetype)initWithDict:(NSDictionary<NSString *, id> * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImageView;
@class UILabel;

SWIFT_CLASS("_TtC18DanTangFromQuanzai11XZQHomeCell")
@interface XZQHomeCell : UITableViewCell

/// 背景图片
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified bgImageView;

/// 标题
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleLabel;

/// 喜爱按钮
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified favoriteBtn;

@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified placeholderBtn;
@property (nonatomic, strong) XZQHomeItem * _Nullable homeItem;
- (void)awakeFromNib;

/// 点击了喜欢按钮
///
/// \param sender 喜欢按钮
- (IBAction)favoriteBtnClick:(id _Nonnull)sender;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai11XZQHomeItem")
@interface XZQHomeItem : NSObject
@property (nonatomic, copy) NSString * _Nullable content_url;
@property (nonatomic, copy) NSString * _Nullable cover_image_url;
@property (nonatomic, copy) NSString * _Nullable share_msg;
@property (nonatomic, copy) NSString * _Nullable short_title;
@property (nonatomic, copy) NSString * _Nullable type;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, copy, getter=template, setter=setTemplate:) NSString * _Nullable template_;
@property (nonatomic, copy) NSString * _Nullable url;
- (nonnull instancetype)initWithDict:(NSDictionary<NSString *, id> * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end

@class UITextField;

SWIFT_CLASS("_TtC18DanTangFromQuanzai22XZQLoginViewController")
@interface XZQLoginViewController : XZQBaseViewController

/// 手机号
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified mobileField;

/// 密码
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified passwordField;

/// 忘记密码
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified forgetPwdBtn;

/// 登录
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified loginButton;
- (void)viewDidLoad;
- (IBAction)loginButtonClick:(id _Nonnull)sender;
- (void)cancelButtonClick;
- (void)regiisterButtonClick;
- (IBAction)otherLoginButtonClick:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai19XZQMeViewController")
@interface XZQMeViewController : XZQBaseViewController
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai23XZQNavigationController")
@interface XZQNavigationController : UINavigationController
+ (void)initialize;

/// 统一所有控制器导航栏左上角的返回按钮，让所有push进来的控制器，它的导航栏左上角的内容都一样，能拦截所有的push操作
///
/// \param viewController 需要压栈的控制器
///
/// \param animated 是否动画
- (void)pushViewController:(UIViewController * _Nonnull)viewController animated:(BOOL)animated;
- (void)navigationBackClick;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class XZQSearchResult;
@class XZQProduct;
@class XZQProductDetail;

SWIFT_CLASS("_TtC18DanTangFromQuanzai14XZQNetworkTool")
@interface XZQNetworkTool : NSObject

/// 单例
+ (XZQNetworkTool * _Nonnull)shareNetworkTool;

/// 获取首页数据 (XZQHomeItem是model)
- (void)loadHomeInfo:(NSInteger)id finished:(void (^ _Nonnull)(NSArray<XZQHomeItem *> * _Nonnull))finished;

/// 获取首页顶部选择数据
- (void)loadHomeTopData:(void (^ _Nonnull)(NSArray<XZQChannel *> * _Nonnull))finished;

/// 搜索界面数据
- (void)loadHotWords:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull))finished;

/// 根据搜索条件进行搜索
- (void)loadSearchResult:(NSString * _Nonnull)keyword sort:(NSString * _Nonnull)sort finished:(void (^ _Nonnull)(NSArray<XZQSearchResult *> * _Nonnull))finished;

/// 获取单品数据
- (void)loadProductData:(void (^ _Nonnull)(NSArray<XZQProduct *> * _Nonnull))finished;

/// 获取单品详情数据
- (void)loadProductDetailData:(NSInteger)id finished:(void (^ _Nonnull)(XZQProductDetail * _Nonnull))finished;

/// 商品详情 评论
- (void)loadProductDetailComments:(NSInteger)id finished:(void (^ _Nonnull)(NSArray<XZQComment *> * _Nonnull))finished;

/// 分类界面 顶部 专题合集
- (void)loadCategoryCollection:(NSInteger)limit finished:(void (^ _Nonnull)(NSArray<XZQCollection *> * _Nonnull))finished;

/// 顶部 专题合集 -> 专题列表
- (void)loadCollectionPosts:(NSInteger)id finished:(void (^ _Nonnull)(NSArray<XZQCollectionPost *> * _Nonnull))finished;

/// 分类界面 风格,品类
- (void)loadCategoryGroup:(void (^ _Nonnull)(NSArray * _Nonnull))finished;

/// 底部 风格品类 -> 列表
- (void)loadStylesOrCategoryInfo:(NSInteger)id finished:(void (^ _Nonnull)(NSArray<XZQCollectionPost *> * _Nonnull))finished;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai27XZQNewfeatureViewController")
@interface XZQNewfeatureViewController : UICollectionViewController
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
@end

@class UICollectionView;
@class NSIndexPath;
@class UICollectionViewCell;

@interface XZQNewfeatureViewController (SWIFT_EXTENSION(DanTangFromQuanzai))
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didEndDisplayingCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai10XZQProduct")
@interface XZQProduct : NSObject
@property (nonatomic, copy) NSString * _Nullable cover_image_url;
@property (nonatomic, copy) NSString * _Nullable describe;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable image_urls;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable price;
@property (nonatomic, copy) NSString * _Nullable purchase_url;
@property (nonatomic, copy) NSString * _Nullable url;
- (nonnull instancetype)initWithDict:(NSDictionary<NSString *, id> * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai16XZQProductDetail")
@interface XZQProductDetail : NSObject
@property (nonatomic, copy) NSString * _Nullable describe;
@property (nonatomic, copy) NSString * _Nullable url;
@property (nonatomic, copy) NSString * _Nullable purchase_url;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable image_urls;
@property (nonatomic, copy) NSString * _Nullable detail_html;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable price;
- (nonnull instancetype)initWithDict:(NSDictionary<NSString *, id> * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai24XZQProductViewController")
@interface XZQProductViewController : XZQBaseViewController
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai17XZQRefreshControl")
@interface XZQRefreshControl : UIRefreshControl
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSString *, id> * _Nullable)change context:(void * _Null_unspecified)context;
- (void)endRefreshing;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai14XZQRefreshView")
@interface XZQRefreshView : UIView
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified loadingView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified tipView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified arrowIcon;
- (void)rotationArrowIcon:(BOOL)flag;
- (void)startLoadingViewAnimation;
- (void)stopLoadingViewAnimation;
+ (XZQRefreshView * _Nonnull)refreshView;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai15XZQSearchResult")
@interface XZQSearchResult : NSObject
@property (nonatomic, copy) NSString * _Nullable price;
@property (nonatomic, copy) NSString * _Nullable cover_image_url;
@property (nonatomic, copy) NSString * _Nullable describe;
@property (nonatomic, copy) NSString * _Nullable name;
- (nonnull instancetype)initWithDict:(NSDictionary<NSString *, id> * _Nonnull)dict OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai19XZQTabBarController")
@interface XZQTabBarController : UITabBarController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18DanTangFromQuanzai22XZQTopicViewController")
@interface XZQTopicViewController : UITableViewController
@property (nonatomic) NSInteger type;
@property (nonatomic, copy) NSArray<XZQHomeItem *> * _Nonnull items;
- (void)viewDidLoad;
- (void)loadHomeData;
- (void)setupTableView;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;

@interface XZQTopicViewController (SWIFT_EXTENSION(DanTangFromQuanzai))
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)homeCellDidClickedFavoriteButton:(UIButton * _Nonnull)button;
@end

#pragma clang diagnostic pop
