#ifndef NAV_MISC_H
#define NAV_MISC_H

class QMouseEvent;
class QPlainTextEdit;

namespace Nav {

template <typename T> void deleteAll(T &t) {
    for (typename T::iterator it = t.begin(); it != t.end(); ++it)
        delete *it;
}

void hackDisableDragAndDropByClearingSelection(
        QPlainTextEdit *editor,
        QMouseEvent *event);

} /* Nav namespace */

#endif // NAV_MISC_H