PORTNAME=	aeidon
PORTVERSION=	1.12
CATEGORIES=	textproc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Reading, write and manipulate text-based subtitle files
WWW=		https://github.com/otsaloma/gaupol

LICENSE=	GPLv3+

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}chardet>=2.2.1,1:textproc/py-chardet@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

post-patch:
	@${SED} -e 's|%%PORTVERSION%%|${PORTVERSION}|' ${WRKSRC}/setup-aeidon.py > ${WRKSRC}/setup.py

.include <bsd.port.mk>
