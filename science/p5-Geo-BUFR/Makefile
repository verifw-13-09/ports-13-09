PORTNAME=	Geo-BUFR
PORTVERSION=	1.39
CATEGORIES=	science perl5 geography
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl extension for handling of WMO BUFR files
WWW=		https://metacpan.org/release/Geo-BUFR

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENCE

USES=		perl5 shebangfix
USE_PERL5=	configure

SHEBANG_FILES=	*.pl

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Geo/BUFR/BUFR.so

.include <bsd.port.mk>
