PORTNAME=	zclockfile
DISTVERSION=	2.0
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	zc.lockfile-${DISTVERSION}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Basic inter-process locks
WWW=		https://pypi.org/project/zc.lockfile/

LICENSE=	ZPL21
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.testing>0:devel/py-zope.testing@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} setup.py test

.include <bsd.port.mk>
