/* -*- c-file-style:"stroustrup"; indent-tabs-mode: nil -*- */
#include "pubnub_qt.h"

#include <QObject>


QT_BEGIN_NAMESPACE
//class QLineEdit;
//class QTextEdit;
class QQuickView;
class QQuickWindow;
QT_END_NAMESPACE



class pubnub_qt_gui_sample : public QObject {
    Q_OBJECT
  
public:
    pubnub_qt_gui_sample();
    QQuickView *mainView;
    QQuickWindow *mainWindow;
    
private slots:
    void onPublish(pubnub_res result);
    void onSubscribe(pubnub_res result);

    void pubkeyChanged();
    void keysubChanged();;
    void messageChanged();
    void channelChanged();
            
private:
//    QLineEdit *d_channel;
//    QLineEdit *d_pubkey;
//    QLineEdit *d_keysub;

//    QLineEdit *d_message;
//    QTextEdit *d_console;

    QScopedPointer<pubnub_qt> d_pb_publish;
    QScopedPointer<pubnub_qt> d_pb_subscribe;


    void resetPubnub();
};
