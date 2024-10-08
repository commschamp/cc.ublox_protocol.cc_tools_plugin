// Generated by commsdsl2tools_qt v6.3.4

#include "CfgTp5PollSelect.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgTp5TpIdx.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgTp5PollSelect.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_tpIdx(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgTp5PollSelectFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TpIdx;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgTp5TpIdx(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_tpIdx(false));
    return props;
}

} // namespace

class CfgTp5PollSelectImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgTp5PollSelect<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgTp5PollSelectImpl
    >
{
public:
    CfgTp5PollSelectImpl() = default;
    CfgTp5PollSelectImpl(const CfgTp5PollSelectImpl&) = delete;
    CfgTp5PollSelectImpl(CfgTp5PollSelectImpl&&) = delete;
    virtual ~CfgTp5PollSelectImpl() = default;
    CfgTp5PollSelectImpl& operator=(const CfgTp5PollSelectImpl&) = default;
    CfgTp5PollSelectImpl& operator=(CfgTp5PollSelectImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgTp5PollSelect::CfgTp5PollSelect() : m_pImpl(new CfgTp5PollSelectImpl) {}
CfgTp5PollSelect::~CfgTp5PollSelect() = default;

CfgTp5PollSelect& CfgTp5PollSelect::operator=(const CfgTp5PollSelect& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTp5PollSelect& CfgTp5PollSelect::operator=(CfgTp5PollSelect&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgTp5PollSelect::MsgIdParamType CfgTp5PollSelect::doGetId()
{
    return ::cc_ublox::message::CfgTp5PollSelect<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgTp5PollSelect::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgTp5PollSelect::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgTp5PollSelect::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgTp5PollSelect::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTp5PollSelect::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgTp5PollSelect*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgTp5PollSelect::MsgIdParamType CfgTp5PollSelect::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgTp5PollSelect::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgTp5PollSelect::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgTp5PollSelect::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgTp5PollSelect::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgTp5PollSelect::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
