PORTNAME=	novnc
PORTVERSION=	1.4.0
CATEGORIES=	www

MAINTAINER=	dpetrov67@gmail.com
COMMENT=	HTML5 VNC client
WWW=		https://github.com/novnc/noVNC

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		cpe

USE_GITHUB=	yes
GH_ACCOUNT=	novnc
GH_PROJECT=	noVNC
GH_TAGNAME=	90455ee

NO_ARCH=	yes
NO_BUILD=	yes
TARGET_DIR=	${PREFIX}/libexec/novnc

post-extract:
	@cd ${WRKSRC} && ${RM} .gitignore .gitmodules .travis.yml .eslintignore
	@cd ${WRKSRC} && ${RM} -R .github
	@${FIND} ${WRKSRC} -name '.eslintrc' -delete

do-install:
	${MKDIR} ${STAGEDIR}${TARGET_DIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${TARGET_DIR}

.include <bsd.port.mk>
