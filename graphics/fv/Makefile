PORTNAME=	fv
PORTVERSION=	1.03
PORTREVISION=	7
CATEGORIES=	graphics
MASTER_SITES=	http://www.eaflux.com/fv/sources/
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Viewer of hdr/pfm images
WWW=		http://www.eaflux.com/fv/

LICENSE=	GPLv2+

LIB_DEPENDS=	libpng.so:graphics/png

USES=		gl gmake pkgconfig zip
USE_GL=		glut
ALL_TARGET=	${PORTNAME}

CXXFLAGS+=	$$(pkg-config --cflags libpng) -I${LOCALBASE}/include
LDFLAGS+=	$$(pkg-config --libs libpng) -L${LOCALBASE}/lib -lglut \
		-lGLU -lGL -lbz2 -lm -lz -llzma -lpthread

PORTDOCS=	AUTHORS ChangeLog README
PLIST_FILES=	bin/${PORTNAME}

OPTIONS_DEFINE=	DEBUG DOCS

DEBUG_CXXFLAGS_OFF=	-DNDEBUG

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD && ( ${OSVERSION} >= 1400091 || ( ${OSVERSION} >= 1302505 && ${OSVERSION} < 1400000 ))
USES+=	llvm:max=15
CC=	clang${LLVM_VERSION}
CPP=	clang-cpp${LLVM_VERSION}
CXX=	clang++${LLVM_VERSION}
.endif

post-patch:
	@${REINPLACE_CMD} -e \
		's|^CXX=|CXX?=| ; \
		 s|^CXXFLAGS=|CXXFLAGS?=| ; \
		 s|^LDFLAGS=|LDFLAGS?=|' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
