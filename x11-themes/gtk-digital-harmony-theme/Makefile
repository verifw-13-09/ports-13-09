PORTNAME=	digital-harmony
PORTVERSION=	1.1
PORTREVISION=	9
CATEGORIES=	x11-themes gnome
MASTER_SITES=	http://freebsd.nsu.ru/distfiles/ LOCAL/danfe
PKGNAMEPREFIX=	${TYPE}-
PKGNAMESUFFIX=	-theme
DISTNAME=	Digital-Harmony

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Another popular theme for GNOME desktop

NO_BUILD=	yes

TYPE?=		gtk
THEME_NAME=	${DISTNAME}

.if ${TYPE} == gtk
THEME_DIR=	${PREFIX}/share/themes/${THEME_NAME}
PLIST_SUB+=	GTK20="" METACITY="@comment "
USES+=		gnome
USE_GNOME=	gtk20
.else	# metacity
THEME_DIR=	${PREFIX}/share/themes/${THEME_NAME}
PLIST_SUB+=	GTK20="@comment " METACITY=""
.endif

post-extract:
	@${RM} -r ${WRKSRC}/gtk-2.0/Scrollbars/Backup \
		${WRKSRC}/gtk-2.0/ReadME.txt

do-install:
	@${MKDIR} ${STAGEDIR}${THEME_DIR}
	${INSTALL_DATA} ${WRKSRC}/index.theme ${STAGEDIR}${THEME_DIR}
.if ${TYPE} == gtk
	cd ${WRKSRC} && ${FIND} gtk-2.0 | \
		${CPIO} -pdu -R ${SHAREOWN}:${SHAREGRP} ${STAGEDIR}${THEME_DIR}
.else
	cd ${WRKSRC} && ${FIND} metacity-1 | \
		${CPIO} -pdu -R ${SHAREOWN}:${SHAREGRP} ${STAGEDIR}${THEME_DIR}
.endif

.include <bsd.port.mk>
