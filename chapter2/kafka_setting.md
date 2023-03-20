- #创建kafka集群
- #如何创建kafka集群

    1. 从kafka官网下载kafka，解压到指定目录
    2. 配置kafka集群，修改config/server.properties文件
        * broker.id=0
        * log.dirs=/tmp/kafka-logs-0
        * listeners=PLAINTEXT://:9092
        * advertised.listeners=PLAINTEXT://localhost:9092
        * zookeeper.connect=localhost:2181
    3. 启动kafka集群
        * bin/kafka-server-start.sh config/server.properties
        * bin/kafka-server-start.sh config/server-1.properties
        * bin/kafka-server-start.sh config/server-2.properties
    4. 创建topic
        * bin/kafka-topics.sh --create --zookeeper localhost:2181 --replication-factor 1 --partitions 1 --topic test
    5. 查看topic
        * bin/kafka-topics.sh --list --zookeeper localhost:2181
    6. 发送消息
        * bin/kafka-console-producer.sh --broker-list localhost:9092 --topic test
    7. 接收消息
        * bin/kafka-console-consumer.sh --bootstrap-server localhost:9092 --topic test --from-beginning

- # 如何部署hive

    1. 从hive官网下载hive，解压到指定目录
    2. 配置hive，修改conf/hive-site.xml文件
        * hive.metastore.uris=thrift://localhost:9083
        * hive.metastore.warehouse.dir=/user/hive/warehouse
        * hive.metastore.schema.verification=true
        * hive.metastore.schema.verification.record.version=false
        * hive.metastore.client.factory.class=org.apache.hadoop.hive.metastore.HiveMetaStoreClientFactory
    3. 启动hive
        * bin/hive --service metastore
        * bin/hive --service hiveserver2
    4. 创建数据库
        * bin/hive -e "create database test"
    5. 查看数据库
        * bin/hive -e "show databases"
    6. 创建表
        * bin/hive -e "create table test.test (id int, name string) row format delimited fields terminated by ','"
    7. 查看表
        * bin/hive -e "show tables in test"
    8. 加载数据
        * bin/hive -e "load data local inpath '/path/test.txt' into table test.test"
    9. 查询数据
        * bin/hive -e "select * from test.test"
# 建立hive orc hdfs 外部表 
- # Path: chapter2/hive_orc.md
- #如何建立hive orc hdfs外部表

    1. 从hive官网下载hive，解压到指定目录
    2. 配置hive，修改conf/hive-site.xml文件
        * hive.metastore.uris=thrift://localhost:9083
        * hive.metastore.warehouse.dir=/user/hive/warehouse
        * hive.metastore.schema.verification=true
        * hive.metastore.schema.verification.record.version=false
        * hive.metastore.client.factory.class=org.apache.hadoop.hive.metastore.HiveMetaStoreClientFactory
    3. 启动hive
        * bin/hive --service metastore
        * bin/hive --service hiveserver2
    4. 创建数据库
        * bin/hive -e "create database test"
    5. 查看数据库
        * bin/hive -e "show databases"
    6. 创建表
        * bin/hive -e "create external table test.test (id int, name string) row format delimited fields terminated by ',' stored as orc location '/path/test'"
    7. 查看表
        * bin/hive -e "show tables in test"
    8. 加载数据
        * bin/hive -e "load data local inpath '/path/test.txt' into table test.test"
    9. 查询数据
        * bin/hive -e "select * from test.test"
# 建立hive parquet hdfs 外部表 
- # Path: chapter2/hive_parquet.md
- #如何建立hive parquet hdfs外部表

    1. 从hive官网下载hive，解压到指定目录
    2. 配置hive，修改conf/hive-site.xml文件
        * hive.metastore.uris=thrift://localhost:9083
        * hive.metastore.warehouse.dir=/user/hive/warehouse
        * hive.metastore.schema.verification=true
        * hive.metastore.schema.verification.record.version=false
        * hive.metastore.client.factory.class=org.apache.hadoop.hive.metastore.HiveMetaStoreClientFactory