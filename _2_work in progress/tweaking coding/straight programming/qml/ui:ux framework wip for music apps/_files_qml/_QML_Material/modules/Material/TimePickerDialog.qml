import QtQuick 2.4
import "./../../modules/Material/"
import "./../../modules/Material/Extras/"
import "./../../modules/Material/fonts"
import "./../../modules/Material/icons/"
import "./../../modules/Material/ListItems" as ListItem
import "./../../modules/QtQuick/Controls/Styles/Material"

Dialog {
    contentMargins: 0
    hasActions: true
    floatingActions: true

    property alias isHours: timePicker.isHours
    property alias prefer24Hour: timePicker.prefer24Hour
    signal timePicked(date timePicked)

    TimePicker {
        id: timePicker
        isHours: true
        bottomMargin: Units.dp(48)
    }

    onAccepted: {
        timePicked(timePicker.getCurrentTime())
        timePicker.reset()
    }

    onRejected: {
        timePicker.reset()
    }
}

