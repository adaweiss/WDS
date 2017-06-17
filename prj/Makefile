
NAZWA_APLIKACJI=LINEFOLLOWER
URUCHOMIENIE_APLIKACJI=./LINEFOLLOWER
ZRODLA_PROJEKTU=`/bin/pwd`/ui/*.ui `/bin/pwd`/res/*.qrc\
                `/bin/pwd`/src/*.cpp `/bin/pwd`/inc/qcustomplot/*.h\
                `/bin/pwd`/inc/*.hh `/bin/pwd`/src/qcustomplot/*.cpp\
		`/bin/pwd`/inc/rs232/*.hh `/bin/pwd`/src/rs232/*.cpp



KATALOG_OBJ=./obj
KATALOG_MOC=./moc

CPPFLAGS=-Wall -pedantic -Iinc -Iinc/rs232
LFLAGS=-Wall

KATALOG_OBJ=./obj
KATALOG_MOC=./out/moc

PODSTAWIENIA=OBJECTS_DIR=${KATALOG_OBJ} INCLUDEPATH=inc INCLUDEPATH+=ui/inc\
        INCLUDEPATH+=.inc\
	INCLUDEPATH+=.inc/qcustomplot\
        INCLUDEPATH+=./res/inc\
        INCLUDEPATH+=./ui/inc\
        TRANSLATIONS=langs/diagui_en.ts\
        MOC_DIR=${KATALOG_MOC}\
        RCC_DIR=./out/rcc\
        UI_DIR=./out/uic\
        QMAKE_CXXFLAGS+=-std=c++11\
        MOC_DIR=${KATALOG_MOC}\
        QT+=widgets



__start__: Makefile.app  __sprawdz_Qt__ ${NAZWA_APLIKACJI}
	rm -f core*; ${URUCHOMIENIE_APLIKACJI}


./module/rs232/atp/lib/libatp.a:
	cd ./module/rs232/atp; make


__sprawdz_Qt__: __sprawdz_qmake__
	@if qmake -v | grep 'ver.*4\.[0-9]*\.[0-9]*' > /dev/null;\
         then exit 0;\
         else echo; echo " Brak biblioteki Qt w wersji 5.x.x";\
              echo;  exit 1;\
        fi


__sprawdz_qmake__:
	@if which qmake > /dev/null; then exit 0;\
        else\
          echo; echo " Brak programu qmake."\
               " Prawdopodobnie biblioteka Qt nie zostala zainstalowana.";\
          echo; exit 1;\
        fi


${NAZWA_APLIKACJI}: pro/${NAZWA_APLIKACJI}.pro __sprawdz__

__sprawdz__: 
	make -f Makefile.app

pro/${NAZWA_APLIKACJI}.pro: Makefile
	rm -f ${NAZWA_APLIKACJI}
	qmake -project -nopwd -o pro/${NAZWA_APLIKACJI}.pro\
               ${PODSTAWIENIA} ${ZRODLA_PROJEKTU} 

Makefile.app: pro/${NAZWA_APLIKACJI}.pro
	qmake -o Makefile.app pro/${NAZWA_APLIKACJI}.pro

project: __usun_pro__ pro/${NAZWA_APLIKACJI}.pro

__usun_pro__:
	rm -f pro/${NAZWA_APLIKACJI}.pro

__remove_bin__:
	rm -f ${NAZWA_APLIKACJI}

again:  __remove_bin__ __start__

clean: Makefile.app
	make -f Makefile.app clean
	if [ -d doc ]; then cd doc;  make clean; fi

cleanall: clean
	rm -f ${NAZWA_APLIKACJI}

cleantotally: cleanall
	rm -f pro/${NAZWA_APLIKACJI}.pro Makefile.app
	rm -fr ${KATALOG_MOC} ${KATALOG_OBJ}
	find . \( -name \*~ -o -name \*.OLD -o -name \*.BAK \) -exec rm {} \;
	if [ -d doc ]; then cd doc; make cleantotally; fi
	rm -rf out pro

help:
	@echo "Subgoals:"
	@echo 
	@echo " project  - a project file is created"
	@echo " clean    - all compilation products are removed"
	@echo " cleanall - an aplication file and all compilation products are removed"
	@echo " cleantotally - except source files and Makfile all otehr files are removed"
	@echo " help     - this information is displayed"
	@echo
