PORTNAME=	Ogg-Vorbis-Header
PORTVERSION=	0.11
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Manipulate / fetch info from Ogg-Vorbis audio files
WWW=		https://metacpan.org/release/Ogg-Vorbis-Header

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE.GPL

BROKEN_FreeBSD_14=	fails to compile: incompatible pointer to integer conversion returning 'SV *' (aka 'struct sv *')

BUILD_DEPENDS=	${RUN_DEPENDS}
LIB_DEPENDS=	libogg.so:audio/libogg \
		libvorbis.so:audio/libvorbis
RUN_DEPENDS=	p5-Inline>=0:devel/p5-Inline \
		p5-Inline-C>=0:devel/p5-Inline-C

USES=		perl5
USE_PERL5=	configure

MAKE_JOBS_UNSAFE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Ogg/Vorbis/Header/Header.so

.include <bsd.port.mk>
