PORTNAME=	google-gax
PORTVERSION=	1.8.2
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Google API Extensions
WWW=		https://github.com/googleapis/gax-ruby

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	rubygem-google-protobuf>=3.9<4:devel/rubygem-google-protobuf \
		rubygem-googleapis-common-protos>=1.3.9<2.0:devel/rubygem-googleapis-common-protos \
		rubygem-googleapis-common-protos-types>=1.0.4<2.0:devel/rubygem-googleapis-common-protos-types \
		rubygem-googleauth>=0.9<2:security/rubygem-googleauth \
		rubygem-grpc>=1.24<2:net/rubygem-grpc \
		rubygem-rly>=0.2.3<0.3:textproc/rubygem-rly

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
