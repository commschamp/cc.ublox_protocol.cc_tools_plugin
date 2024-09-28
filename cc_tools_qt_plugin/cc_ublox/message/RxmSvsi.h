// Generated by commsdsl2tools_qt v6.3.4

#pragma once

#include <QtCore/QVariantList>
#include <memory>
#include "cc_tools_qt_plugin/cc_ublox/Message.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

class RxmSvsiImpl;
class RxmSvsi : public cc_tools_qt_plugin::cc_ublox::Message
{
public:
    RxmSvsi();
    RxmSvsi(const RxmSvsi&) = delete;
    RxmSvsi(RxmSvsi&&) = delete;
    virtual ~RxmSvsi();
    RxmSvsi& operator=(const RxmSvsi& other);
    RxmSvsi& operator=(RxmSvsi&&);
    static MsgIdParamType doGetId();
    static constexpr bool hasStaticMsgId() { return true; }
    static constexpr MsgIdType staticMsgId() { return static_cast<MsgIdType>(544U); }

protected:
    virtual const char* nameImpl() const override;
    virtual const QVariantList& fieldsPropertiesImpl() const override;
    virtual void dispatchImpl(cc_tools_qt::MessageHandler& handler) override;
    virtual void resetImpl() override;
    virtual bool assignImpl(const cc_tools_qt::Message& other) override;
    virtual MsgIdParamType getIdImpl() const override;
    virtual comms::ErrorStatus readImpl(ReadIterator& iter, std::size_t len) override;
    virtual comms::ErrorStatus writeImpl(WriteIterator& iter, std::size_t len) const override;
    virtual bool validImpl() const override;
    virtual std::size_t lengthImpl() const override;
    virtual bool refreshImpl() override;

private:
    std::unique_ptr<RxmSvsiImpl> m_pImpl;
};

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
