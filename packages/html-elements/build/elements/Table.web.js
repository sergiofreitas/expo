import { forwardRef } from 'react';
import { StyleSheet, createElement } from 'react-native';
export const Table = forwardRef((props, ref) => {
    return createElement('table', { ...props, style: [styles.reset, props.style], ref });
});
export const Thead = forwardRef((props, ref) => {
    return createElement('thead', { ...props, style: [styles.reset, props.style], ref });
});
export const Tbody = forwardRef((props, ref) => {
    return createElement('tbody', { ...props, style: [styles.reset, props.style], ref });
});
export const Th = forwardRef((props, ref) => {
    return createElement('th', { ...props, style: [styles.reset, props.style], ref });
});
export const Tr = forwardRef((props, ref) => {
    return createElement('tr', { ...props, style: [styles.reset, props.style], ref });
});
export const Td = forwardRef((props, ref) => {
    return createElement('td', { ...props, style: [styles.reset, props.style], ref });
});
export const Caption = forwardRef((props, ref) => {
    return createElement('caption', { ...props, style: [styles.reset, props.style], ref });
});
const styles = StyleSheet.create({
    reset: {
        fontFamily: 'System',
        padding: 0,
    },
});
//# sourceMappingURL=Table.web.js.map