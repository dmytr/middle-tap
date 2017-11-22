const Clutter = imports.gi.Clutter;
const MiddleTap = imports.gi.MiddleTap;

let deviceManager;
let handlerId;

function init() {
    deviceManager = Clutter.DeviceManager.get_default();
}

function enable() {
    if (!deviceManager) return;

    handlerId = deviceManager.connect('device-added', _enable);

    let devices = deviceManager.peek_devices();
    devices.forEach(_enable);
}

function disable() {
    if (!deviceManager) return;

    if (handlerId) {
        deviceManager.disconnect(handlerId);
        handlerId = undefined;
    }

    let devices = deviceManager.peek_devices();
    devices.forEach(_disable);
}

function _enable(device) {
    if (device && device.device_type == Clutter.InputDeviceType.TOUCHPAD_DEVICE) {
        MiddleTap.enable(device, true);
    }
}

function _disable(device) {
    if (device && device.device_type == Clutter.InputDeviceType.TOUCHPAD_DEVICE) {
        MiddleTap.enable(device, false);
    }
}
