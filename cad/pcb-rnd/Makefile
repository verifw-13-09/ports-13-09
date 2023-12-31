PORTNAME=	pcb-rnd
DISTVERSION=	3.1.1
CATEGORIES=	cad
MASTER_SITES=	http://repo.hu/projects/pcb-rnd/releases/

MAINTAINER=	hasdalcodes@gmail.com
COMMENT=	Flexible, modular Printed Circuit Board editor
WWW=		http://www.repo.hu/projects/pcb-rnd/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libfungw.so:devel/fungw \
		libfreetype.so:print/freetype2 \
		libgd.so:graphics/gd \
		libgenht.so:devel/genht \
		librnd-hid.so:cad/librnd \
		libxml2.so:textproc/libxml2

USES=		gmake pkgconfig tar:bz2

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--cflags/libs/sul/freetype2="-I${LOCALBASE}/include/freetype2 -I${LOCALBASE}/include/freetype2/freetype" \
		--ldflags/libs/sul/freetype2=-L${LOCALBASE}/lib \
		${WITH_DEBUG:D--debug} \
		--CC=${CC} \
		--CFLAGS='${CFLAGS}' \
		--LDFLAGS='${LDFLAGS}'
BINARY_ALIAS=	make=${MAKE_CMD}

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD && ( ${OSVERSION} >= 1400091 || ( ${OSVERSION} >= 1302505 && ${OSVERSION} < 1400000 ))
USES+=	llvm:max=15
CC=	clang${LLVM_VERSION}
CPP=	clang-cpp${LLVM_VERSION}
CXX=	clang++${LLVM_VERSION}
.endif

post-install:
.for f in pcb-rnd txt2bxl bxl2txt gsch2pcb-rnd
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/$f
.endfor
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/pcb-rnd/plugins/*.so

.include <bsd.port.mk>
