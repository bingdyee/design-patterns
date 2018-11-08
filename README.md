# GOF23 设计模式(管理变化，提高复用)

# 面向对象设计原则
1) 【依赖倒置(DIP)】抽象不应依赖细节，细节应依赖于抽象;
2) 【开放封闭原则(OCP)】对扩展开放，对修改关闭;
3) 【单一职责原则(SRP)】就一个类而言，应该仅有一个引起它变化的原因;
4) 【Liskov替换原则(LSP)】子类必须能替换其基本类型;
5) 【接口隔离原则(ISP)】不应该强迫用户依赖于他们不用的方法。接口属于客户，不属于他所在的类层次结构;
6) 【重用发布等价原则(REP)】重用的粒度就是发布的粒度;
7) 【共同重用原则(CCP)】一个包中的所有类应该是共同重用的。
8) 【共同封闭原则(CRP)】一个包中的所有类对于同一类性质的变化应该是共同封闭的,包内变化不应该影响其它的包;
9) 【无依赖原则(ADP)】在包的依赖关系中不应该存在环，细节不应该被依赖;
10) 【稳定依赖原则(SDP)】朝着稳定的方向进行依赖;
11) 【稳定抽象原则(SAP)】一个包的抽象程度应该和其他稳定程度一致; 

## 概述
1) **重构获得模式**；
2) 创建型、结构型、行为型；
3) 类模型(处理类与子类的静态关系)、对象模式(处理对象间的动态关系)；
4) **找出变化点和稳定点,封装变化点**；
5) **隔离变化**；
6) 先组合，后继承;
7) 良好的设计是演化的结果;
8) 手段: 分解&抽象;


## 分类概述
1) 组建协作模式: 模板方法、策略模式、观察者模式;
2) 单一职责模式: 装饰模式、桥接模式;
3) 对象创建模式: 工厂方法、抽象工厂、创建者模式、原型模式;
4) 接口隔离模式: 门面模式、代理模式、适配器模式、中介者模式;
5) 数据结构模式: 组合模式、迭代器模式、职责链;
6) 行为变化模式: 命令模式、访问器;
7) 领域规则模式: 解析器;

## 什么时候不用模式
1) 代码可读性很差时;
2) 需求理解还很浅时;
3) 变化没有显现时;
4) 不是系统的关键依赖点;
5) 项目没有复用价值时;
6) 项目将要发布时;

> 手中无剑, 心中有剑: **忘掉设计模式，记住设计原则**