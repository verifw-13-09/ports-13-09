PORTNAME=	OpenGL
PORTVERSION=	0.66
PORTREVISION=	7
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CHM
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to display 3D data using OpenGL, GLU, GLUT, and GLX
WWW=		https://metacpan.org/release/OpenGL

MANUAL_PACKAGE_BUILD=	needs the X server it will be used with to build

USES=		gl perl5 display:configure xorg
USE_PERL5=	configure
USE_GL=		glut
USE_XORG=	x11 xext xmu xi ice

CONFIGURE_ARGS=	interface=FREEGLUT

PORTSCOUT=	limit:^[0-9\.]*$$

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
