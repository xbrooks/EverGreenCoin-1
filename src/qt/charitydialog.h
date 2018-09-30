#ifndef CHARITYDIALOG_H
#define CHARITYDIALOG_H
#include <QWidget>

namespace Ui {
    class StakeForCharityDialog;
}
class WalletModel;

QT_BEGIN_NAMESPACE
class QLineEdit;
QT_END_NAMESPACE

class StakeForCharityDialog : public QWidget
{
    Q_OBJECT

public:
    explicit StakeForCharityDialog(QWidget *parent = 0);
    ~StakeForCharityDialog();

    void setModel(WalletModel *model);
    void setAddress(const QString &address);
    void setAddress(const QString &address, QLineEdit *addrEdit);
    void updateMessageColor();

signals:
    void changeOverviewLogo(QString IMG, QString URL);
    void resetOverviewLogo();

private slots:
    void on_enableButton_clicked();
    void on_disableButton_clicked();
    void on_addressBookButton_clicked();
    void on_changeAddressBookButton_clicked();
    void on_comboBox_currentIndexChanged(int index);
    void on_comboBox_activated(int index);
    void loadCharities();
    void on_btnRefreshCharities_clicked();
    void on_copyToClipboard_clicked();

private:
    Ui::StakeForCharityDialog *ui;
    WalletModel *model;
};

#endif // CHARITYDIALOG_H
